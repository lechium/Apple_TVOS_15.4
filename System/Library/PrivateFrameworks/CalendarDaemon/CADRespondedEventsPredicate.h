//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CADRespondedEventsPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
}

+ (id)predicate;	// IMP=0x0000000000040fe3
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000040fdb
- (id)predicateFormat;	// IMP=0x0000000000041105
- (id)defaultPropertiesToLoad;	// IMP=0x0000000000041010
- (_Bool)shouldLoadDefaultProperties;	// IMP=0x0000000000041008
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040ffd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
