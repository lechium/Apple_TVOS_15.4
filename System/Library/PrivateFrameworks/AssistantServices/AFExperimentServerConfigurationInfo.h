//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface AFExperimentServerConfigurationInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    NSString *_configurationIdentifier;	// 8 = 0x8
    NSURL *_configurationURL;	// 16 = 0x10
    double _maxTimeToSync;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000102067
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000102739
- (void).cxx_destruct;	// IMP=0x00000000001024d1
@property(readonly, nonatomic) double maxTimeToSync; // @synthesize maxTimeToSync=_maxTimeToSync;
@property(readonly, copy, nonatomic) NSURL *configurationURL; // @synthesize configurationURL=_configurationURL;
@property(readonly, copy, nonatomic) NSString *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
- (id)buildDictionaryRepresentation;	// IMP=0x00000000001023e4
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000102231
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000102183
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010206f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010205c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000101f28
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000101c82
@property(readonly, copy) NSString *description;
- (id)initWithConfigurationIdentifier:(id)arg1 configurationURL:(id)arg2 maxTimeToSync:(double)arg3;	// IMP=0x0000000000101ba6
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000001027a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

