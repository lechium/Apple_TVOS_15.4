//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DNDContactHandle, NSString;

@interface DNDMutableClientEventDetails
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021296
@property(nonatomic) _Bool shouldAlwaysInterrupt; // @dynamic shouldAlwaysInterrupt;
@property(nonatomic) unsigned long long behavior; // @dynamic behavior;
@property(nonatomic) _Bool notifyAnyway; // @dynamic notifyAnyway;
@property(copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property(copy, nonatomic) DNDContactHandle *sender; // @dynamic sender;
@property(nonatomic) unsigned long long urgency; // @dynamic urgency;
@property(nonatomic) unsigned long long type; // @dynamic type;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end

