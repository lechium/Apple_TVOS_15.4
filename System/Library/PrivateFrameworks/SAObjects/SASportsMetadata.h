//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASportsMetadata <SAAceSerializable>
{
}

+ (id)metadataWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021b3e
+ (id)metadata;	// IMP=0x0000000000021b2c
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *selected;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSNumber *average;
- (id)encodedClassName;	// IMP=0x0000000000021b1f
- (id)groupIdentifier;	// IMP=0x0000000000021b0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

