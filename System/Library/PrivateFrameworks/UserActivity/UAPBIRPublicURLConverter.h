//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserActivity/UAPBIRConverter-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UAPBIRPublicURLConverter : NSObject <UAPBIRConverter>
{
}

+ (void)registerConverter;	// IMP=0x0000000000001af0
- (id)convertIRDataToPlatform:(id)arg1;	// IMP=0x0000000000001c87
- (id)convertPlatformDataToIR:(id)arg1;	// IMP=0x0000000000001bf0
- (id)typeString;	// IMP=0x0000000000001be3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

