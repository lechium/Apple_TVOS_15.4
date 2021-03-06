//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMSystemException
{
    NSNumber *_errorCode;	// 40 = 0x28
    NSString *_message;	// 48 = 0x30
    NSNumber *_rateLimitDuration;	// 56 = 0x38
}

+ (id)structFields;	// IMP=0x00000000002daebf
+ (id)structName;	// IMP=0x00000000002daeb2
- (void).cxx_destruct;	// IMP=0x00000000002db07e
@property(retain, nonatomic) NSNumber *rateLimitDuration; // @synthesize rateLimitDuration=_rateLimitDuration;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;

@end

