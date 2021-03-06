//
//  ProductViewModel.h
//  CollectionViewExample
//
//  Created by Guido Marucci Blas on 8/10/14.
//  Copyright (c) 2014 Wolox. All rights reserved.
//

#import "Delegator.h"
#import "ImageFetcher.h"

@class Product;

extern NSString * const ProductViewModelProductFavoritePropertyChangedNotification;

extern NSString * const ProductViewModelNotificationProductKey;


@interface ProductViewModel : Delegator

@property(readonly, nonatomic) NSString * productId;
@property(readonly, nonatomic) NSString * name;
@property(readonly, nonatomic) NSString * price;
@property(readonly, nonatomic) UIImage * image;
@property(readonly, nonatomic) NSString * productDescription;
@property(readonly, nonatomic) BOOL favorited;

- (instancetype)initWithProduct:(Product *)product andRepository:(id<ProductRepository>)repository;

- (instancetype)initWithProduct:(Product *)product
                     repository:(id<ProductRepository>)repository
          andNotificationCenter:(NSNotificationCenter *)notificationCenter;

- (void)loadImageWithHandler:(ImageHandler)handler;

- (void)setFavorited:(BOOL)favorited withHandler:(void(^)(NSError *))handler;

@end
