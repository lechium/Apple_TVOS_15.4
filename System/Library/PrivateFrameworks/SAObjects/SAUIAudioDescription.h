//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAUIAudioDescription <SAAceSerializable>
{
}

+ (id)audioDescriptionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003949c
+ (id)audioDescription;	// IMP=0x000000000003948a
@property(copy, nonatomic) NSNumber *sampleRate;
@property(copy, nonatomic) NSNumber *reserved;
@property(copy, nonatomic) NSNumber *framesPerPacket;
@property(copy, nonatomic) NSNumber *formatID;
@property(copy, nonatomic) NSNumber *formatFlags;
@property(copy, nonatomic) NSString *format;
@property(copy, nonatomic) NSNumber *channelsPerFrame;
@property(copy, nonatomic) NSNumber *bytesPerPacket;
@property(copy, nonatomic) NSNumber *bytesPerFrame;
@property(copy, nonatomic) NSNumber *bitsPerChannel;
- (id)encodedClassName;	// IMP=0x000000000003947d
- (id)groupIdentifier;	// IMP=0x0000000000039469

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
