//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLArgumentEncoder, MTLDevice;

@protocol MTLFunction <NSObject>
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
@property(nonatomic, readonly) NSDictionary *functionConstantsDictionary;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSArray *stageInputAttributes;
@property(nonatomic, readonly) NSArray *vertexAttributes;
@property(nonatomic, readonly) long long patchControlPointCount;
@property(nonatomic, readonly) unsigned long long patchType;
@property(nonatomic, readonly) unsigned long long functionType;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end

