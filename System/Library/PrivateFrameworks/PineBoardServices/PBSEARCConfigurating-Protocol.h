//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@protocol PBSEARCObserver;

@protocol PBSEARCConfigurating <NSObject>
@property(readonly, nonatomic) long long eARCStatus;
- (void)removeEARCObserver:(id <PBSEARCObserver>)arg1;
- (void)addEARCObserver:(id <PBSEARCObserver>)arg1;
- (void)enableEARC:(_Bool)arg1;
@end
