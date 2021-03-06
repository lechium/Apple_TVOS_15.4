//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding>
{
    long long _remoteCameraOrientation;	// 8 = 0x8
    long long _localVideoContextSlotIdentifier;	// 16 = 0x10
    long long _remoteVideoContextSlotIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002bf07
@property(nonatomic) long long remoteVideoContextSlotIdentifier; // @synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier;
@property(nonatomic) long long localVideoContextSlotIdentifier; // @synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier;
@property(nonatomic) long long remoteCameraOrientation; // @synthesize remoteCameraOrientation=_remoteCameraOrientation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002c003
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002bf0f
- (unsigned long long)hash;	// IMP=0x000000000002beb9
- (_Bool)isEqualToVideoCallAttributes:(id)arg1;	// IMP=0x000000000002be13
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002bdb6
- (id)description;	// IMP=0x000000000002bcc4

@end

