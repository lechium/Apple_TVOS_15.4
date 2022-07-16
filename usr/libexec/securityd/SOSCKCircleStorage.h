//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SOSCKCircleStorage
{
}

- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00400000001f153b
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001f1533
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001f152b
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001f1523
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x00100000001f151b
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001f1513
- (id)getAccount;	// IMP=0x00100000001f1501
- (long long)getTransportType;	// IMP=0x00100000001f14f6
- (id)initWithAccount:(id)arg1;	// IMP=0x00100000001f148e
- (id)init;	// IMP=0x00100000001f144a

@end

