//
//  UserRepository.h
//  CollectionViewExample
//
//  Created by Guido Marucci Blas on 8/10/14.
//  Copyright (c) 2014 Wolox. All rights reserved.
//

#import <Foundation/Foundation.h>

#define PRODUCT_REPOSITORY_ERROR_DOMAIN @"com.wolox.CollectionViewExample.UserRepository"

#define PRODUCT_NOT_FOUND 1

@class Product;

@protocol ProductRepository <NSObject>

- (void)fetchById:(NSString *)productId withHandler:(void(^)(NSError *, Product *))handler;

- (void)favoriteProductWithId:(NSString *)productId withHandler:(void(^)(NSError *))handler;

@end
