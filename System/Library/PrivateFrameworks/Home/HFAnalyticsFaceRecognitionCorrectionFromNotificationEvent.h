//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface HFAnalyticsFaceRecognitionCorrectionFromNotificationEvent
{
    NSString *_errorDomain;	// 8 = 0x8
    NSNumber *_errorCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a3363
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (id)payload;	// IMP=0x00000000000a3232
- (id)initWithData:(id)arg1;	// IMP=0x00000000000a30d2

@end

