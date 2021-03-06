//
//  APLViewController.h
//  APLExpandableCollectionViewDemo
//
//  Created by Michael Kamphausen on 01.08.14.
//  Copyright (c) 2014 apploft GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APLExpandableCollectionView.h"

@interface APLViewController : UICollectionViewController <APLExpandableCollectionViewDelegate, UICollectionViewDataSource>

@property(nonatomic, retain) APLExpandableCollectionView *collectionView;

@end
