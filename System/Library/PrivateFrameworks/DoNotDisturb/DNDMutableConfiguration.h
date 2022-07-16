//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DNDSenderConfiguration, NSDictionary, NSSet;

@interface DNDMutableConfiguration
{
}

+ (id)configurationOfType:(unsigned long long)arg1;	// IMP=0x0000000000008a81
+ (id)defaultConfiguration;	// IMP=0x0000000000008a45
- (id)_configurationForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000009df2
- (_Bool)hasSecureData;	// IMP=0x0000000000009c36
- (void)removeExceptionForContact:(id)arg1;	// IMP=0x0000000000009bd2
- (void)setExceptionOfType:(unsigned long long)arg1 forContact:(id)arg2;	// IMP=0x0000000000009b0b
- (void)removeExceptionForContactGroup:(id)arg1;	// IMP=0x0000000000009a66
- (void)setExceptionOfType:(unsigned long long)arg1 forContactGroup:(id)arg2;	// IMP=0x000000000000994f
- (void)removeExceptionForContactType:(unsigned long long)arg1;	// IMP=0x000000000000986f
- (void)setExceptionOfType:(unsigned long long)arg1 forContactType:(unsigned long long)arg2;	// IMP=0x00000000000096d1
- (void)setMinimumBreakthroughUrgency:(unsigned long long)arg1 forApplication:(id)arg2;	// IMP=0x0000000000009653
- (void)removeExceptionForApplication:(id)arg1 thread:(id)arg2;	// IMP=0x00000000000095bf
- (void)setExceptionOfType:(unsigned long long)arg1 forApplication:(id)arg2 thread:(id)arg3;	// IMP=0x0000000000009526
- (void)removeExceptionForApplication:(id)arg1;	// IMP=0x00000000000094ad
- (void)setExceptionOfType:(unsigned long long)arg1 forApplication:(id)arg2;	// IMP=0x000000000000942f
- (void)setMinimumBreakthroughUrgency:(unsigned long long)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x0000000000009388
- (void)removeExceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2;	// IMP=0x0000000000009277
- (void)setExceptionOfType:(unsigned long long)arg1 forApplicationIdentifier:(id)arg2 thread:(id)arg3;	// IMP=0x000000000000908d
- (void)removeExceptionForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000009029
- (void)setExceptionOfType:(unsigned long long)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x0000000000008f54
@property(nonatomic) unsigned long long hideApplicationBadges; // @dynamic hideApplicationBadges;
@property(nonatomic) unsigned long long minimumBreakthroughUrgency; // @dynamic minimumBreakthroughUrgency;
@property(copy, nonatomic) DNDSenderConfiguration *senderConfiguration; // @dynamic senderConfiguration;
@property(copy, nonatomic) NSSet *deniedApplications; // @dynamic deniedApplications;
@property(copy, nonatomic) NSDictionary *allowedApplications; // @dynamic allowedApplications;
@property(copy, nonatomic) NSSet *deniedApplicationIdentifiers; // @dynamic deniedApplicationIdentifiers;
@property(copy, nonatomic) NSDictionary *allowedApplicationIdentifiers; // @dynamic allowedApplicationIdentifiers;
@property(nonatomic) unsigned long long suppressionType; // @dynamic suppressionType;

@end
