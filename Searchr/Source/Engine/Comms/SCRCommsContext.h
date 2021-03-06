//
//  SCRCommsContext.h
//  Searchr
//
//  Created by Merrick Sapsford on 31/03/2016.
//  Copyright © 2016 Merrick Sapsford. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SCRFlickrApi;
@class OFFlickrAPIContext;

@protocol SCRCommsContext <NSObject>

/**
 The active Flickr context.
 */
@property (nonatomic, strong, readonly) OFFlickrAPIContext *flickrContext;
/**
 The active Flickr API.
 */
@property (nonatomic, strong, readonly) SCRFlickrApi *flickrApi;

@end

NS_ASSUME_NONNULL_END

