//
//  HGSegmentedPageViewController.h
//  HGPersonalCenterExtend
//
//  Created by Arch on 2019/1/3.
//  Copyright © 2019 mint_bin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HGCategoryView.h"
#import "HGPageViewController.h"

@protocol HGSegmentedPageViewControllerDelegate <NSObject>
@optional
- (void)segmentedPageViewControllerWillBeginDragging;
- (void)segmentedPageViewControllerDidEndDragging;
- (void)segmentedPageViewControllerWillTransitionToPage:(NSInteger)page;
- (void)segmentedPageViewControllerDidTransitionToPage:(NSInteger)page;
@end

@interface HGSegmentedPageViewController : UIViewController
@property (nonatomic, strong, readonly) HGCategoryView *categoryView;
@property (nonatomic, copy) NSArray<HGPageViewController *> *pageViewControllers;
@property (nonatomic) NSInteger originalPage;
@property (nonatomic, readonly) NSInteger selectedPage;
@property (nonatomic, strong, readonly) HGPageViewController *selectedPageViewController;
@property (nonatomic, weak) id<HGSegmentedPageViewControllerDelegate> delegate;

- (void)makePageViewControllersScrollToTop;
- (void)makePageViewControllersScrollState:(BOOL)canScroll;
@end

