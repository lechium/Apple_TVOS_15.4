//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse
{
    CNContact *_userInfo;	// 8 = 0x8
}

+ (_Bool)jsonDataOptional;	// IMP=0x00000000001f24ba
- (void).cxx_destruct;	// IMP=0x00000000001f24d3
@property(readonly, nonatomic) CNContact *userInfo; // @synthesize userInfo=_userInfo;
- (id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(_Bool)arg3;	// IMP=0x00000000001f238f
- (id)initWithData:(id)arg1;	// IMP=0x00000000001f1d63

@end

