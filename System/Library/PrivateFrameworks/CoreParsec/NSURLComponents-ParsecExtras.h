//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLComponents.h>

@interface NSURLComponents (ParsecExtras)
+ (id)parsec_componentsWithString:(id)arg1;	// IMP=0x00000000000994df
+ (id)parsec_componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;	// IMP=0x0000000000099493
- (id)parsec_componentsAfterRemovingSubdomains;	// IMP=0x00000000000993d2
- (id)parsec_componentsForEmbeddedAMPURLFromRange:(struct _NSRange)arg1;	// IMP=0x0000000000099280
- (struct _NSRange)embeddedAMPURLRange;	// IMP=0x0000000000099221
- (id)parsec_normalizedURLStringForDeepLinkWhitelist;	// IMP=0x000000000009920a
- (id)parsec_normalizedURLStringForDeepLinkIngest;	// IMP=0x00000000000991f3
- (id)parsec_normalizedURLStringForLDAModel;	// IMP=0x00000000000991dc
- (id)parsec_normalizedURLStringForTLDFeatures;	// IMP=0x00000000000991c5
- (id)parsec_normalizedURLStringWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000098cd9
@end

