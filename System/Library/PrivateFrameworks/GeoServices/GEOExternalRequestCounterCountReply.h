//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCReply-Protocol.h>

@class NSArray, NSString;

@interface GEOExternalRequestCounterCountReply <GEOXPCReply>
{
    NSArray *_objects;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006eaf5d
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (_Bool)isValid;	// IMP=0x00000000006eaf30
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x00000000006ead2c
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006eab54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
