//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate <MPPProtobufferCoding>
{
    NSString *_searchString;	// 8 = 0x8
    NSSet *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b0678
+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;	// IMP=0x00000000000b050b
- (void).cxx_destruct;	// IMP=0x00000000000b04da
@property(copy, nonatomic) NSSet *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;	// IMP=0x00000000000b03b7
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;	// IMP=0x00000000000b01cc
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b00f0
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000affe1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000afcc5
- (id)ML3PredicateForContainer;	// IMP=0x000000000013a0a6
- (id)ML3PredicateForTrack;	// IMP=0x000000000013a078
- (id)_ML3PredicateForEntityClass:(Class)arg1;	// IMP=0x0000000000139c16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

