//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DNDBypassSettings, NSDate;

@interface DNDSMutableGlobalConfiguration
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000038f68
@property(nonatomic, getter=isAutomaticallyGenerated) _Bool automaticallyGenerated; // @dynamic automaticallyGenerated;
@property(copy, nonatomic) NSDate *lastModified; // @dynamic lastModified;
@property(copy, nonatomic) DNDBypassSettings *bypassSettings; // @dynamic bypassSettings;
@property(nonatomic) unsigned long long preventAutoReply; // @dynamic preventAutoReply;

@end
