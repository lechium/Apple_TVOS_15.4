//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAUIColor <SAAceSerializable>
{
}

+ (id)colorWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000030a67
+ (id)color;	// IMP=0x0000000000030a55
@property(nonatomic) long long redValue;
@property(nonatomic) long long greenValue;
@property(nonatomic) long long blueValue;
@property(copy, nonatomic) NSNumber *alpha;
- (id)encodedClassName;	// IMP=0x0000000000030a48
- (id)groupIdentifier;	// IMP=0x0000000000030a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
