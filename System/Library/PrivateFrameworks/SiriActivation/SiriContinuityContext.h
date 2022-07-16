//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFRequestInfo, NSDictionary, NSNumber;

@interface SiriContinuityContext
{
    NSNumber *_isTemporaryDevice;	// 8 = 0x8
    AFRequestInfo *_requestInfo;	// 16 = 0x10
    NSDictionary *_userActivity;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000365a4
- (void).cxx_destruct;	// IMP=0x00000000000368dd
@property(readonly, nonatomic) NSDictionary *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) AFRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000367c9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000365ac
- (id)description;	// IMP=0x00000000000364da
- (_Bool)isTemporaryDevice;	// IMP=0x00000000000364bd
- (id)speechRequestOptions;	// IMP=0x0000000000036455
- (id)initWithUserActivity:(id)arg1;	// IMP=0x00000000000363e7
- (id)initWithRequestInfo:(id)arg1;	// IMP=0x00000000000361c8
- (id)initWithSpeechRequestOptions:(id)arg1;	// IMP=0x0000000000035fff

@end

