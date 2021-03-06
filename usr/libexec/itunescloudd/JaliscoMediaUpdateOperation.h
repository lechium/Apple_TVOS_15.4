//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ICDJaliscoSupportedMediaKindsHandler;

@interface JaliscoMediaUpdateOperation
{
    id <ICDJaliscoSupportedMediaKindsHandler> _supportedMediaKindsHandler;	// 8 = 0x8
}

+ (id)oversizeLogCategory;	// IMP=0x00400000000ed353
+ (id)logCategory;	// IMP=0x00100000000ed349
- (void).cxx_destruct;	// IMP=0x00200000000ed336
- (void)handleSuccess:(long long)arg1;	// IMP=0x00100000000ed209
- (id)newImporter;	// IMP=0x00100000000ed19a
- (_Bool)preflightImport;	// IMP=0x00100000000ecff0
- (long long)localDatabaseRevision;	// IMP=0x00100000000ecfac
- (id)queryFilterPercentEscaped;	// IMP=0x00100000000ecef1
- (id)initWithConfiguration:(id)arg1 reason:(long long)arg2 supportedMediaKindsHandler:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000ece67

@end

