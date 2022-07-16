//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface SASTestingInput : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    NSURL *_recordedSpeechURL;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000032646
- (void).cxx_destruct;	// IMP=0x000000000003295d
@property(copy, nonatomic) NSURL *recordedSpeechURL; // @synthesize recordedSpeechURL=_recordedSpeechURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000032816
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032744
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003264e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003258d
- (id)init;	// IMP=0x0000000000032519

@end

