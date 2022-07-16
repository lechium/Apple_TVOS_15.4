//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeRequest <GEOXPCRequest>
{
    unsigned long long _targetSize;	// 8 = 0x8
}

+ (Class)replyClass;	// IMP=0x0000000001140bf9
@property(nonatomic) unsigned long long targetSize; // @synthesize targetSize=_targetSize;
- (_Bool)expectsReply;	// IMP=0x0000000001140d38
- (_Bool)isValid;	// IMP=0x0000000001140d30
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000001140cbb
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000001140c2c
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000001140c0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

