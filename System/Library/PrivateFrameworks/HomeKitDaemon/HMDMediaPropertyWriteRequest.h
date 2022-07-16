//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface HMDMediaPropertyWriteRequest
{
    id _value;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

+ (id)deserializeWriteRequests:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x0000000000b5596b
+ (id)serializeWriteRequests:(id)arg1;	// IMP=0x0000000000b5561b
+ (id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000000b55571
+ (id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3;	// IMP=0x0000000000b554e3
+ (id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x0000000000b55439
- (void).cxx_destruct;	// IMP=0x0000000000b55408
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000b55329
- (id)initWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000000b55272

@end
