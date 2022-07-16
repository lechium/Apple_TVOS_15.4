//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SATextDecorationRegion <SAAceSerializable>
{
}

+ (id)textDecorationRegionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000027606
+ (id)textDecorationRegion;	// IMP=0x00000000000275f4
@property(copy, nonatomic) NSNumber *start;
@property(copy, nonatomic) NSString *property;
@property(copy, nonatomic) NSNumber *length;
- (id)encodedClassName;	// IMP=0x00000000000275e7
- (id)groupIdentifier;	// IMP=0x00000000000275d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
