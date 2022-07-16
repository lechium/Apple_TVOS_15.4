//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLFunctionConstantValues, NSArray, NSDictionary, NSString;

@interface MTLFunctionDescriptor : NSObject <NSCopying>
{
    struct MTLFunctionDescriptorPrivate _private;	// 8 = 0x8
    unsigned long long _pipelineOptions;	// 64 = 0x40
    NSDictionary *_pluginData;	// 72 = 0x48
}

+ (id)functionDescriptor;	// IMP=0x0000000000093edc
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093ead
+ (id)alloc;	// IMP=0x0000000000093ea3
- (_Bool)applyFunctionConstants;	// IMP=0x000000000009493b
- (void)setApplyFunctionConstants:(_Bool)arg1;	// IMP=0x0000000000094932
- (id)pluginData;	// IMP=0x0000000000094928
- (void)setPluginData:(id)arg1;	// IMP=0x00000000000948f3
- (unsigned long long)pipelineOptions;	// IMP=0x00000000000948e9
- (void)setPipelineOptions:(unsigned long long)arg1;	// IMP=0x00000000000948df
- (id)description;	// IMP=0x00000000000948cb
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000946c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000945d8
- (CDStruct_41a22ec7)hashStableWithFunction:(id)arg1;	// IMP=0x000000000009439b
- (unsigned long long)hash;	// IMP=0x00000000000942eb
@property(copy, nonatomic) NSArray *binaryArchives;
@property(nonatomic) unsigned long long options; // @dynamic options;
- (void)setPrivateFunctions:(id)arg1;	// IMP=0x0000000000094263
- (id)privateFunctions;	// IMP=0x0000000000094259
@property(copy, nonatomic) MTLFunctionConstantValues *constantValues; // @dynamic constantValues;
@property(copy, nonatomic) NSString *specializedName; // @dynamic specializedName;
@property(copy, nonatomic) NSString *name; // @dynamic name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093fab
- (void)dealloc;	// IMP=0x0000000000093f45
- (id)init;	// IMP=0x0000000000093ef5

@end
