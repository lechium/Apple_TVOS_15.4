//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSCopying-Protocol.h>
#import <VoiceServices/NSSecureCoding-Protocol.h>

@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding, NSCopying>
{
    double _startTime;	// 8 = 0x8
    struct _NSRange _textRange;	// 16 = 0x10
}

+ (void)adjustWordTimingInfo:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000002910f
+ (id)utf16TimingInfoWithUTF8Range:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000028cee
+ (unsigned long long)extraBytesFromUTF8ToUTF16With:(const char *)arg1 totalLength:(unsigned long long)arg2 begin:(unsigned long long)arg3 end:(unsigned long long)arg4;	// IMP=0x0000000000028c3d
+ (id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2;	// IMP=0x0000000000028808
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028800
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;	// IMP=0x00000000000292eb
- (unsigned long long)hash;	// IMP=0x000000000002875d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028685
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028608
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028561
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028498

@end

