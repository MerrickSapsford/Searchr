//
//  SCRViewControllerBase.m
//  Searchr
//
//  Created by Merrick Sapsford on 02/04/2016.
//  Copyright © 2016 Merrick Sapsford. All rights reserved.
//

#import "SCRViewControllerBase.h"
#import "SCRAppDelegate.h"

@implementation SCRViewControllerBase

- (SCREngine *)engine {
    return ((SCRAppDelegate *)[UIApplication sharedApplication].delegate).engine;
}

- (SCRViewSizer *)viewSizer {
    if (!_viewSizer) {
        _viewSizer = [SCRViewSizer new];
    }
    return _viewSizer;
}

@end
