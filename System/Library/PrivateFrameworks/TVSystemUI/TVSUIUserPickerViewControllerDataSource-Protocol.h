//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemUI/NSObject-Protocol.h>

@class NSDiffableDataSourceSnapshot, NSSet, NSString, TVSUIUserPickerModel;

@protocol TVSUIUserPickerViewControllerDataSource <NSObject>
@property(readonly, nonatomic) NSSet *userPickerSelectedUserIdentifiers;
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *userPickerDiffableSnapshot;
- (TVSUIUserPickerModel *)userPickerModelWithIdentifier:(NSString *)arg1;
@end

