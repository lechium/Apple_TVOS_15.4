//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ExplicitPreferenceManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x00400000001751dc
- (_Bool)explicitPreferencesDisabled:(char *)arg1;	// IMP=0x00400000001751bb
- (void)setExplicitPreferencesDisabled:(_Bool)arg1;	// IMP=0x0010000000175189
- (_Bool)lastChangeInducingBagExplicitOff:(char *)arg1;	// IMP=0x0010000000175168
- (void)setLastChangeInducingBagExplicitOff:(_Bool)arg1;	// IMP=0x0010000000175136
- (id)init;	// IMP=0x001000000017456b

@end
