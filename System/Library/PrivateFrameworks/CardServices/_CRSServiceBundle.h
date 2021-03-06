//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

#import <CardServices/CRSIdentifiedServing-Protocol.h>

@class NSString;
@protocol CRSServing;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing>
{
    id <CRSServing> _service;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001bbe
- (void).cxx_destruct;	// IMP=0x0000000000001bde
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001bcc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001bc6
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
- (void)_initializeServiceWithClass:(Class)arg1;	// IMP=0x0000000000001a1f
- (id)underlyingService;	// IMP=0x00000000000019b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

