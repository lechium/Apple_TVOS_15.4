//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSData, NSString;

@interface GEOAPReportDailySettingRequest <GEOXPCRequest>
{
    NSData *_settings;	// 8 = 0x8
}

+ (Class)replyClass;	// IMP=0x0000000000c07e4f
- (void).cxx_destruct;	// IMP=0x0000000000c080aa
@property(retain, nonatomic) NSData *settings; // @synthesize settings=_settings;
- (_Bool)expectsReply;	// IMP=0x0000000000c0807d
- (_Bool)isValid;	// IMP=0x0000000000c08075
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000c07fa2
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c07e82
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;	// IMP=0x0000000000c07e60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

