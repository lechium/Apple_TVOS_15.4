//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeDSL/BMDSL.h>

#import <BiomeStreams/BMDSLIdentifiable-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol BMBookmark;

@interface BMDSLStreamPublisher : BMDSL <BMDSLIdentifiable>
{
    id <BMBookmark> _bookmark;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    NSString *_basePath;	// 32 = 0x20
    unsigned long long _streamType;	// 40 = 0x28
    NSArray *_backingEvents;	// 48 = 0x30
    NSNumber *_endTime;	// 56 = 0x38
}

+ (_Bool)isStreamInfoValidForIdentifier:(id)arg1 basePath:(id)arg2 streamType:(unsigned long long)arg3;	// IMP=0x0000000000043923
+ (_Bool)isStreamIdentifierValid:(id)arg1;	// IMP=0x0000000000043916
+ (_Bool)isStreamTypeInValidRange:(unsigned long long)arg1;	// IMP=0x00000000000438f6
+ (unsigned long long)streamTypeForDSLType:(unsigned long long)arg1;	// IMP=0x00000000000438e6
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000043160
+ (id)name;	// IMP=0x0000000000042b6f
- (void).cxx_destruct;	// IMP=0x0000000000043bba
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSArray *backingEvents; // @synthesize backingEvents=_backingEvents;
@property(readonly, nonatomic) unsigned long long streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <BMBookmark> bookmark; // @synthesize bookmark=_bookmark;
- (id)bpsPublisher;	// IMP=0x0000000000043769
- (id)storeStream;	// IMP=0x0000000000043523
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004333b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000043175
- (id)upstreams;	// IMP=0x0000000000043168
- (id)initRestrictedStreamWithPublisher:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000043148
- (id)initRestrictedStreamWithBookmark:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000043130
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000042f11
- (id)initWithPublisher:(id)arg1 identifier:(id)arg2 streamType:(unsigned long long)arg3;	// IMP=0x0000000000042d9f
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 streamType:(unsigned long long)arg5 basePath:(id)arg6;	// IMP=0x0000000000042c23
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 privateStreamBasePath:(id)arg3;	// IMP=0x0000000000042bf9
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 startTime:(double)arg3 privateStreamBasePath:(id)arg4;	// IMP=0x0000000000042be7
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 streamType:(unsigned long long)arg3;	// IMP=0x0000000000042bbd
- (id)initWithIdentifier:(id)arg1 streamType:(unsigned long long)arg2;	// IMP=0x0000000000042b8e
- (id)initWithStartTime:(double)arg1 identifier:(id)arg2 streamType:(unsigned long long)arg3;	// IMP=0x0000000000042b7c

@end
