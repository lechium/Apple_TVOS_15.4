//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier, UITableView, UIView;
@protocol PSHeaderFooterView;

@protocol PSHeaderFooterView
- (UIView<PSHeaderFooterView> *)initWithSpecifier:(PSSpecifier *)arg1;

@optional
- (double)preferredHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (void)refreshContentsWithSpecifier:(PSSpecifier *)arg1;
@end

