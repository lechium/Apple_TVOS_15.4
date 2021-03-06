//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding>
{
    NSString *_identityInfo;	// 8 = 0x8
    NSString *_serviceIdentityInfo;	// 16 = 0x10
    NSMutableDictionary *_pcsInfoByZoneID;	// 24 = 0x18
    NSMutableArray *_notFoundZoneIDs;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004ce95
- (void).cxx_destruct;	// IMP=0x000000000004d2ab
@property(retain, nonatomic) NSMutableArray *notFoundZoneIDs; // @synthesize notFoundZoneIDs=_notFoundZoneIDs;
@property(retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property(retain, nonatomic) NSString *serviceIdentityInfo; // @synthesize serviceIdentityInfo=_serviceIdentityInfo;
@property(retain, nonatomic) NSString *identityInfo; // @synthesize identityInfo=_identityInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004cfc4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ce9d
- (id)init;	// IMP=0x000000000004ce20

@end

