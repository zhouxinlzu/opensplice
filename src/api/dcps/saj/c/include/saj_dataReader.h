
 /* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_opensplice_dds_dcps_DataReaderImpl */

#ifndef _Included_org_opensplice_dds_dcps_DataReaderImpl
#define _Included_org_opensplice_dds_dcps_DataReaderImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniCreateReadcondition
 * Signature: (III)LDDS/ReadCondition;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniCreateReadcondition
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniCreateQuerycondition
 * Signature: (IIILjava/lang/String;[Ljava/lang/String;)LDDS/QueryCondition;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniCreateQuerycondition
  (JNIEnv *, jobject, jint, jint, jint, jstring, jobjectArray);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniDeleteReadcondition
 * Signature: (LDDS/ReadCondition;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniDeleteReadcondition
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniDeleteContainedEntities
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniDeleteContainedEntities
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniSetQos
 * Signature: (LDDS/DataReaderQos;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniSetQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetQos
 * Signature: (LDDS/DataReaderQosHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniSetListener
 * Signature: (LDDS/DataReaderListener;I)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniSetListener
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetListener
 * Signature: ()LDDS/DataReaderListener;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetListener
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetTopicdescription
 * Signature: ()LDDS/TopicDescription;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetTopicdescription
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetSubscriber
 * Signature: ()LDDS/Subscriber;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetSubscriber
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetSampleRejectedStatus
 * Signature: (LDDS/SampleRejectedStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetSampleRejectedStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetLivelinessChangedStatus
 * Signature: (LDDS/LivelinessChangedStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetLivelinessChangedStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetRequestedDeadlineMissedStatus
 * Signature: (LDDS/RequestedDeadlineMissedStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetRequestedDeadlineMissedStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetRequestedIncompatibleQosStatus
 * Signature: (LDDS/RequestedIncompatibleQosStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetRequestedIncompatibleQosStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetSubscriptionMatchedStatus
 * Signature: (LDDS/SubscriptionMatchedStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetSubscriptionMatchedStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetSampleLostStatus
 * Signature: (LDDS/SampleLostStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetSampleLostStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniWaitForHistoricalData
 * Signature: (LDDS/Duration_t;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniWaitForHistoricalData
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniWaitForHistoricalDataWCondition
 * Signature: (Ljava/lang/String;[Ljava/lang/String;LDDS/Time_t;LDDS/Time_t;LDDS/ResourceLimitsQosPolicy;LDDS/Duration_t;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniWaitForHistoricalDataWCondition
  (JNIEnv *, jobject, jstring, jobjectArray, jobject, jobject, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetMatchedPublications
 * Signature: (LDDS/InstanceHandleSeqHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetMatchedPublications
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_DataReaderImpl
 * Method:    jniGetMatchedPublicationData
 * Signature: (LDDS/PublicationBuiltinTopicDataHolder;J)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_DataReaderImpl_jniGetMatchedPublicationData
  (JNIEnv *, jobject, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
