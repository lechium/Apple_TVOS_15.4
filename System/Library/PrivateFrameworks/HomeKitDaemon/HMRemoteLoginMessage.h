//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSString;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding>
{
    NSString *_sessionID;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000afe2b3
- (void).cxx_destruct;	// IMP=0x0000000000afe282
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000afe160
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000afe0b2
- (id)description;	// IMP=0x0000000000afe01f
- (id)initWithSessionID:(id)arg1;	// IMP=0x0000000000afdfb1
- (id)initNewMessage;	// IMP=0x0000000000afdf36

@end
