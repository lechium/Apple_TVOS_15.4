//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RenderBox/RBDecoderDelegate-Protocol.h>
#import <RenderBox/RBEncoderDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBArchiveDelegateImpl : NSObject <RBEncoderDelegate, RBDecoderDelegate>
{
    unsigned int _flags;	// 8 = 0x8
    struct objc_ptr<NSData *> _metadata;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000007cd0
- (void).cxx_destruct;	// IMP=0x0000000000007cc1
- (struct CGFont *)decodedCGFontWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007bd4
- (id)encodedCGFontData:(struct CGFont *)arg1 error:(id *)arg2;	// IMP=0x0000000000007b43
- (const void *)decodedImageContentsWithData:(id)arg1 type:(int *)arg2 error:(id *)arg3;	// IMP=0x00000000000078fe
- (id)encodedImageData:(CDStruct_27041886)arg1 error:(id *)arg2;	// IMP=0x000000000000774c
- (void)decodedMetadata:(id)arg1;	// IMP=0x000000000000771e
- (id)encodedMetadata;	// IMP=0x0000000000007714
- (id)initWithFlags:(unsigned int)arg1;	// IMP=0x00000000000076d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

