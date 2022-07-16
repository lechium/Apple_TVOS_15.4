//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SACalendarEventSearchCompleted <SAServerBoundCommand>
{
}

+ (id)eventSearchCompletedWithResults:(id)arg1;	// IMP=0x000000000000682c
+ (id)eventSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000006822
+ (id)eventSearchCompleted;	// IMP=0x0000000000006810
- (_Bool)requiresResponse;	// IMP=0x0000000000006909
@property(copy, nonatomic) NSArray *results;
- (id)initWithResults:(id)arg1;	// IMP=0x0000000000006879
- (id)encodedClassName;	// IMP=0x0000000000006803
- (id)groupIdentifier;	// IMP=0x00000000000067ef

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

