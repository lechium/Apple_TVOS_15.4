//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypologyPreferences-Protocol.h>

@class NSURL;
@protocol TITypologyProfileOptInManaging;

@interface TITypologyPreferences : NSObject <TITypologyPreferences>
{
    id <TITypologyProfileOptInManaging> _typologyProfileOptInManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000055486
@property(nonatomic) __weak id <TITypologyProfileOptInManaging> typologyProfileOptInManager; // @synthesize typologyProfileOptInManager=_typologyProfileOptInManager;
@property(readonly, nonatomic) unsigned long long persistenceStrategy;
@property(readonly, nonatomic) double maxLifetimeInterval;
@property(readonly, nonatomic) long long maxBytesPersistedTypologyTraceLogs;
@property(readonly, nonatomic) long long maxBytesPersistedTypologyRecords;
@property(readonly, nonatomic) _Bool isTypologyInDatavault;
@property(readonly, nonatomic) NSURL *typologyDirectoryURL;
@property(readonly, nonatomic) _Bool typologyLoggingEnabledByProfile;
@property(readonly, nonatomic) _Bool typologyLoggingEnabled;
- (_Bool)_typologyLoggingEnabledByProfile;	// IMP=0x0000000000055256
- (_Bool)_typologyLoggingEnabledByInternalPreference;	// IMP=0x00000000000551da

@end

