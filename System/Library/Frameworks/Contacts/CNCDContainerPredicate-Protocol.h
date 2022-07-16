//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class NSFetchRequest, NSPredicate;

@protocol CNCDContainerPredicate <NSObject>
- (NSFetchRequest *)cn_persistenceFilterRequest;
- (NSPredicate *)cn_topLevelFilter;
- (NSPredicate *)cn_coreDataPredicate;

@optional
- (NSPredicate *)cn_secondaryRecursePredicate;
@end

