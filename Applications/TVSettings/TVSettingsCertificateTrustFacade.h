//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface TVSettingsCertificateTrustFacade : NSObject
{
    NSArray *_trustCertificates;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000004b780
- (void).cxx_destruct;	// IMP=0x002000000004bce0
@property(copy, nonatomic) NSArray *trustCertificates; // @synthesize trustCertificates=_trustCertificates;
- (MISSING_TYPE *)_displayNameForCertificate: /* Error: Ran out of types for this method. */;	// IMP=0x001000000004bbe0
- (void)_updateCertificates;	// IMP=0x001000000004b960
- (id)init;	// IMP=0x001000000004b870

@end

