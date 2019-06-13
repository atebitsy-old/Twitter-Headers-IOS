//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFSTimer;
@protocol TFNPerformanceMetricReporter;

@interface TFNPerformanceMetric : NSObject
{
    NSString *_metricIdentifier;
    NSString *_componentIdentifier;
    unsigned long long _metricType;
    NSString *_measurementsCacheKey;
    NSArray *_measurementClasses;
    NSArray *_measurements;
    id <TFNPerformanceMetricReporter> _reporter;
    double _reportingInterval;
    double _cachingInterval;
    double _previouslyCachedTimestamp;
    TFSTimer *_cachingTimer;
}

+ (id)_tfn_persistedMeasurementsForKey:(id)arg1;
@property(retain, nonatomic) TFSTimer *cachingTimer; // @synthesize cachingTimer=_cachingTimer;
@property(nonatomic) double previouslyCachedTimestamp; // @synthesize previouslyCachedTimestamp=_previouslyCachedTimestamp;
@property(readonly, nonatomic) double cachingInterval; // @synthesize cachingInterval=_cachingInterval;
@property(readonly, nonatomic) double reportingInterval; // @synthesize reportingInterval=_reportingInterval;
@property(readonly, nonatomic) __weak id <TFNPerformanceMetricReporter> reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSArray *measurements; // @synthesize measurements=_measurements;
@property(readonly, nonatomic) NSArray *measurementClasses; // @synthesize measurementClasses=_measurementClasses;
@property(readonly, copy, nonatomic) NSString *measurementsCacheKey; // @synthesize measurementsCacheKey=_measurementsCacheKey;
@property(readonly, nonatomic) unsigned long long metricType; // @synthesize metricType=_metricType;
@property(readonly, copy, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, copy, nonatomic) NSString *metricIdentifier; // @synthesize metricIdentifier=_metricIdentifier;
- (void).cxx_destruct;
- (void)_tfn_cachingTimerDidFireOnMainThread;
- (void)_tfn_persistMeasurements;
- (void)_tfn_persistMeasurementsIfNeeded;
- (_Bool)_tfn_canReportCurrentValue;
- (void)_tfn_reportCurrentValue;
- (void)_tfn_reportCurrentValueIfNeeded;
- (void)_tfn_resetMeasurements;
- (void)_tfn_registerSampleWithValue:(double)arg1 forMeasurementAtIndex:(unsigned long long)arg2;
- (void)resetMeasurements;
- (void)reportCurrentValue;
- (double)currentValueForMeasurements:(id)arg1;
- (void)registerSampleWithValue:(double)arg1 forMeasurementAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) double currentValue;
@property(readonly, nonatomic) NSArray *currentMeasurements;
- (id)description;
- (id)init;
- (id)initWithMetricIdentifier:(id)arg1 componentIdentifier:(id)arg2 metricType:(unsigned long long)arg3 measurementClasses:(id)arg4 reporter:(id)arg5 reportingInterval:(double)arg6 cachingInterval:(double)arg7;

@end
