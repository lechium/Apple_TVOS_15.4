//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CPLCloudKitErrors : NSObject
{
}

+ (_Bool)isContainerHasBeenWipedError:(id)arg1;	// IMP=0x00400000000e2700
+ (_Bool)isOperationCancelledOrDeferredError:(id)arg1;	// IMP=0x00100000000e2665
+ (_Bool)isCloudKitOperationCancelledError:(id)arg1;	// IMP=0x00100000000e2518
+ (_Bool)isFeatureDisabledError:(id)arg1;	// IMP=0x00100000000e238b
+ (_Bool)isRecordNotFoundError:(id)arg1;	// IMP=0x00100000000e22fe
+ (id)realErrorForError:(id)arg1;	// IMP=0x00100000000e20ab
+ (id)errorsPerZoneIDForPartialFailureError:(id)arg1;	// IMP=0x00100000000e2047
+ (id)errorsPerRecordIDForPartialFailureError:(id)arg1;	// IMP=0x00100000000e1fe3
+ (id)_filteredPartialFailureError:(id)arg1 itemClass:(Class)arg2;	// IMP=0x00100000000e1d2f
+ (_Bool)isPartialFailureError:(id)arg1;	// IMP=0x00100000000e1ca2
+ (_Bool)getCloudKitErrorCode:(long long *)arg1 internalCode:(long long *)arg2 fromError:(id)arg3;	// IMP=0x00100000000e1894
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeIdentifiers:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;	// IMP=0x00100000000e0ac3
+ (id)_errorForCancelledError:(id)arg1;	// IMP=0x00100000000e0956
+ (id)CPLErrorForCloudKitError:(id)arg1 scopeIdentifiers:(id)arg2 withRequestUUIDs:(id)arg3 description:(id)arg4;	// IMP=0x00100000000e08b1
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3 arguments:(struct __va_list_tag [1])arg4;	// IMP=0x00100000000e0887
+ (id)CPLErrorForCloudKitError:(id)arg1 withRequestUUIDs:(id)arg2 description:(id)arg3;	// IMP=0x00100000000e07d3
+ (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x00100000000e07bf
+ (id)_bestErrorForUnderlyingError:(id)arg1 scopeIdentifiers:(id)arg2;	// IMP=0x00100000000dfee7
+ (id)_rejectionReasonFromPartialError:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000dfc2b
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x00100000000dfa4b
+ (_Bool)_isCKErrorForRejectedRecord:(id)arg1;	// IMP=0x00100000000df924

@end

