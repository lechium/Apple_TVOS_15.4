//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CADNotifiableEventsPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
}

+ (id)predicate;	// IMP=0x00000000000047c2
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000047ba
- (id)predicateFormat;	// IMP=0x00000000000048d6
- (id)defaultPropertiesToLoad;	// IMP=0x00000000000047ef
- (_Bool)shouldLoadDefaultProperties;	// IMP=0x00000000000047e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000047dc
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x00000000000048e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
