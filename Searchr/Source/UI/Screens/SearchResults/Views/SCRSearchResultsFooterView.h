//
//  SCRSearchResultsFooterView.h
//  Searchr
//
//  Created by Merrick Sapsford on 03/04/2016.
//  Copyright © 2016 Merrick Sapsford. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCRSearchResultsFooterView : UICollectionReusableView

@property (weak, nonatomic) IBOutlet UIButton *errorButton;

@property (nonatomic, assign) BOOL errorViewVisible;

@end
