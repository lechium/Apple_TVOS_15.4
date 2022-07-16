//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMStoreData-Protocol.h>
#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSString;

@interface BMTestEvent <BMStoreData, NSSecureCoding>
{
    struct {
        unsigned int dataVersion;
        unsigned int content;
    } _data;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e371
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000000e2d3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e5b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e534
- (_Bool)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x000000000000e379
- (id)serialize;	// IMP=0x000000000000e32f
@property(readonly, nonatomic) unsigned int dataVersion;
- (unsigned int)content;	// IMP=0x000000000000e2b2
- (id)initWithContent:(unsigned int)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000000e264
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000000e1ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

