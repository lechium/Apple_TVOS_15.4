//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CMCapture/FigXPCCoding-Protocol.h>
#import <CMCapture/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding>
{
    NSDictionary *_formatDictionary;	// 8 = 0x8
    struct opaqueCMFormatDescription *_formatDescription;	// 16 = 0x10
    CDStruct_79c71658 _previewDimensions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002829c
@property(readonly) NSDictionary *formatDictionary;
@property(readonly, getter=isExperimental) _Bool experimental;
@property(readonly, getter=isDefaultActiveFormat) _Bool defaultActiveFormat;
@property(readonly) unsigned int format;
@property(readonly) struct opaqueCMFormatDescription *formatDescription;
@property(readonly) unsigned int mediaType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028527
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000002847b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002842c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000283a5
- (id)copyXPCEncoding;	// IMP=0x0000000000028372
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000002830a
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;	// IMP=0x00000000000282a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
