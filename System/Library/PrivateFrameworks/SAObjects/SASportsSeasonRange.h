//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDate, NSString;

@interface SASportsSeasonRange <SAAceSerializable>
{
}

+ (id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025b33
+ (id)seasonRange;	// IMP=0x0000000000025b21
@property(copy, nonatomic) NSDate *start;
@property(copy, nonatomic) NSString *seasonType;
@property(copy, nonatomic) NSDate *end;
- (id)encodedClassName;	// IMP=0x0000000000025b14
- (id)groupIdentifier;	// IMP=0x0000000000025b00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

