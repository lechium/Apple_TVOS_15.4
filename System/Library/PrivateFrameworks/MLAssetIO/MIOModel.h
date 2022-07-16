//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MLAssetIO/NSMutableCopying-Protocol.h>

@class MIOModelDescription, MIOVersionInfo, NSArray, NSString;
@protocol MIOModeling;

@interface MIOModel : NSObject <NSMutableCopying>
{
    NSObject<MIOModeling> *_modelImpl;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002a22c
@property(retain, nonatomic) NSObject<MIOModeling> *modelImpl; // @synthesize modelImpl=_modelImpl;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a16e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a163
- (unsigned long long)hash;	// IMP=0x000000000002a10b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a01f
- (id)description;	// IMP=0x0000000000029f9f
- (id)layerHistogram;	// IMP=0x0000000000029f3b
@property(readonly, copy, nonatomic) NSArray *subModels;
@property(readonly, copy, nonatomic) NSArray *layers;
- (void)setModelDescription:(id)arg1;	// IMP=0x0000000000029deb
@property(readonly, copy, nonatomic) MIOModelDescription *modelDescription;
@property(readonly, copy, nonatomic) NSString *modelTypeName;
@property(readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029ae7
- (id)initWithModeling:(id)arg1;	// IMP=0x0000000000029a68
- (id)initWithMessageStream:(struct CodedInputStream *)arg1 parserContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000299a4
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002960f
- (id)init;	// IMP=0x00000000000295fa

@end
