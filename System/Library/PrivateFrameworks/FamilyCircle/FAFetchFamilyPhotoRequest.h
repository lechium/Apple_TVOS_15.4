//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest
{
    _Bool _localFallback;	// 8 = 0x8
    _Bool _useMonogramAsLastResort;	// 9 = 0x9
    NSNumber *_memberDSID;	// 16 = 0x10
    NSString *_memberHashedDSID;	// 24 = 0x18
    unsigned long long _requestedSize;	// 32 = 0x20
    double _requiredWidth;	// 40 = 0x28
    double _requiredHeight;	// 48 = 0x30
    double _monogramDiameter;	// 56 = 0x38
    long long _backgroundType;	// 64 = 0x40
    NSString *_fullname;	// 72 = 0x48
    NSString *_emailAddress;	// 80 = 0x50
    NSString *_phoneNumber;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000f9ac
@property(copy) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *fullname; // @synthesize fullname=_fullname;
@property long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property _Bool useMonogramAsLastResort; // @synthesize useMonogramAsLastResort=_useMonogramAsLastResort;
@property double monogramDiameter; // @synthesize monogramDiameter=_monogramDiameter;
@property double requiredHeight; // @synthesize requiredHeight=_requiredHeight;
@property double requiredWidth; // @synthesize requiredWidth=_requiredWidth;
@property(readonly) unsigned long long requestedSize; // @synthesize requestedSize=_requestedSize;
@property(readonly) _Bool localFallback; // @synthesize localFallback=_localFallback;
@property(readonly, copy) NSString *memberHashedDSID; // @synthesize memberHashedDSID=_memberHashedDSID;
@property(readonly, copy) NSNumber *memberDSID; // @synthesize memberDSID=_memberDSID;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f584
- (id)requestOptions;	// IMP=0x000000000000f2f1
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x000000000000f2a2
- (id)init;	// IMP=0x000000000000f248
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3 connectionProvider:(id)arg4;	// IMP=0x000000000000f1bc
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3;	// IMP=0x000000000000f130
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3 connectionProvider:(id)arg4;	// IMP=0x000000000000f0a4
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(_Bool)arg3;	// IMP=0x000000000000f018

@end

